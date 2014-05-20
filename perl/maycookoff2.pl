
my $a=<STDIN>;
while($a--)
{
	$b=<STDIN>;
	if(360 % $b==0){
	print "y ";}
	else {
	print "n ";}
	if ($b<=360){ 
	print "y ";}
	else {print "n ";}
		if ((($b*($b+1))/2)<=360) {print "y.\n";}
		else {print "n.\n";}
		
}
