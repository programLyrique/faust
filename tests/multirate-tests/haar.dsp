dow = vectorize(2) : [1];
mean = _ <: _,mem : + : /(2);
left = _,!;
process = _ <: (mean:dow),dow <: left,-;
