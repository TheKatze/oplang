#!/bin/bash

# fetch dependencies if not already existent
if [[ ! -d "dependencies" ]]; then
    mkdir dependencies

    pushd dependencies

    git clone https://github.com/Crascit/DownloadProject.git

    popd
fi
