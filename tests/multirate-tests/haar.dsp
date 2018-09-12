downD = vectorize(2,_) : [1];
mean = _ <: _,mem : + : /(2);
left = _,!;
process = _ <: (mean:downD),downD <: left,-;
