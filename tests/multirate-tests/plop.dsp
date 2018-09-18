random  = +(12345)~*(1103515245);
noise   = random/2147483647.0;

process = (noise : vectorize(6) : serialize), noise;
