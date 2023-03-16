@echo off
setlocal EnableDelayedExpansion
title Monte Carlo Method

set /p n=Enter the number of points to generate: 

set count=0

for /l %%i in (1,1,%n%) do (
    set /a x=!random! %% 10000
    set /a y=!random! %% 10000
    set /a dist=x*x+y*y

    if !dist! leq 100000000 set /a count=count+1
)

set /a pi=4*count/n

echo Approximation of pi: %pi%

endlocal
