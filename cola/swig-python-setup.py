#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from setuptools import setup, Extension
import platform
import sys
import os
import sysconfig

def get_platform_settings():
    if platform.system().lower().startswith('linux'):
        # Remove '-Wstrict-prototypes' flag if present
        try:
            cfg_vars = sysconfig.get_config_vars()
            if "OPT" in cfg_vars:
                cfg_vars["OPT"] = cfg_vars["OPT"].replace("-Wstrict-prototypes", "")
        except Exception:
            pass

        # Set compiler environment variables
        os.environ['CC'] = 'gcc'
        os.environ['CXX'] = 'g++'

adaptagrams_module = Extension(
    '_adaptagrams',
    sources=['adaptagrams_wrap.cxx'],
    extra_compile_args=[
        '-DUSE_ASSERT_EXCEPTIONS',
        '-DSWIG_PYTHON_SILENT_MEMLEAK',
        '-std=gnu++11',
#        '-stdlib=libc++'
    ],
    include_dirs=['.'],
    extra_link_args=[
        'libcola/.libs/libcola.a',
        'libtopology/.libs/libtopology.a',
        'libavoid/.libs/libavoid.a',
        'libvpsc/.libs/libvpsc.a',
        'libdialect/.libs/libdialect.a'
    ],
)

if __name__ == '__main__':
    # Apply platform-specific settings
    get_platform_settings()

    setup(
        name='adaptagrams',
        version='0.1',
        author='MArVL',
        description='Adaptagrams libraries',
        ext_modules=[adaptagrams_module],
        py_modules=['adaptagrams'],
        python_requires='>=3.6',  # Add minimum Python version requirement
        # Add additional metadata
        classifiers=[
            'Development Status :: 3 - Alpha',
            'Intended Audience :: Developers',
            'Programming Language :: Python :: 3',
            'Programming Language :: C++',
        ],
    )
