proc $suma$ {
	a += b;
}
proc $cacanegra$ {
	a -= b;
}
a = 1;
b = 4;
printn(call $cacanegra$);
printn(a);
.
