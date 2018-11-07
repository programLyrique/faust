// Faust Template
process = \(x,y).( (vectorize(x,10) : serialize : +(y)), y );
