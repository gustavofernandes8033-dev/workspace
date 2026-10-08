#!/bin/bash
arquivoBinario=$1
arquivoASerCompilado=$2
gcc -o $arquivoBinario $arquivoASerCompilado
./$arquivoBinario
