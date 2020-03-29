[![Build Status](https://travis-ci.org/brunorijsman/cascade-cpp.svg?branch=master)](https://travis-ci.org/brunorijsman/cascade-cpp)    [![Code Coverage](https://codecov.io/gh/brunorijsman/cascade-cpp/branch/master/graph/badge.svg)](https://codecov.io/gh/brunorijsman/cascade-cpp)

# cascade-cpp

C++ implementation of Cascade information reconciliation protocol for Quantum Key Distribution.

Modeled after the [Python implementation](https://github.com/brunorijsman/cascade-python) of Cascade.

# Getting started

To install on Ubuntu 18.04:

    git clone https://github.com/brunorijsman/cascade-cpp.git
    cd cascade-cpp
    make ubuntu-get-dependencies

To build and run unit tests:

    make test

To build and run unit tests, and produce code coverage report in coverage/coverage-test.html (on a
Mac this also opens the coverage report in the browser):

    make test-coverage

To produce the data for all experiments:

    make data

To produce the data for specific set of experiments:

    # Choose one of these
    make data-papers
    make data-papers-subset
    make data-performance
    make data-zero-handling

To produce graphs, you need to have [Cascade-Python](https://github.com/brunorijsman/cascade-python)
installed in the $HOME/cascade-python directory.

The produce the graphs for specific set of experiments (this assumes that that the data has already
been produced):

    make graphs

To produce the graphs for specific set of experiments:

    # Choose one of these
    make graphs-papers
    make graphs-performance
    make graphs-zero-handling

To run a small reconciliation with full debug prints:

    make debug