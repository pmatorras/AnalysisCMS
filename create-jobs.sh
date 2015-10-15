#!/bin/bash


shopt -s expand_aliases
alias grepv='grep -v -e Run2015C -e QCD -e GluGluH -e HToWW -e WJetsToLNu_HT -e WZJets -e ttH'


if [ $# -lt 2 ]; then
    echo "  "
    echo "  ./create-jobs.sh /gpfs/csic_projects/tier3data/LatinosSkims/Data13TeV/50ns             50ns"
    echo "  ./create-jobs.sh /gpfs/csic_projects/tier3data/LatinosSkims/MC_Spring15/50ns_August_PU 50ns"
    echo "  "
    echo "  ./create-jobs.sh /gpfs/csic_projects/tier3data/LatinosSkims/Data13TeV/25ns             25ns"
    echo "  ./create-jobs.sh /gpfs/csic_projects/tier3data/LatinosSkims/MC_Spring15/25ns_August_PU 25ns"
    echo "  "
    echo "  WARNING, will not read any latino tree that contains one of these strings"
    echo "  "`alias | grep grepv | awk -F= '{print $2}' | sed "s/'//g" | sed "s/-e //g" | sed "s/grep -v //g"`
    echo "  "
    exit -1
fi

export FILEPATH=$1
export ERA=$2

ls -1 $FILEPATH | grepv | awk '{ print "./runWZ '$FILEPATH'/"$1,"'$ERA'" }'