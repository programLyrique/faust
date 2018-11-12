declare name 		"echo";
declare version 	"1.0";
declare author 		"Grame";
declare license 	"BSD";
declare copyright 	"(c)GRAME 2006";
//-----------------------------------------------
// 		Impulse response of a simpleeEcho
//-----------------------------------------------

import("music.lib");

process = vectorize(1), vectorize(1) : # : echo1s <: [0], [1]
    with {
        echo1s  = vgroup("echo  1000", +~(delay(65536, int(hslider("millisecond", 1.25, 0,   1000, 0.10)*millisec)-1) * (hslider("feedback", 75, 0,  100, 0.1)/100.0)));
    };
