@echo off
setlocal EnableDelayedExpansion
title Leibniz Formula

set /p n=Enter the number of terms to use: 

set pi=0
set sign=1

for /l %%i in (0,1,%n%) do (
    set /a denom=2*%%i+1
    set /a term=sign*10000/denom
    set /a pi=pi+term
    set /a sign=-sign
)

set /a pi=pi*4/10000

echo Approximation of pi: %pi%

endlocal
