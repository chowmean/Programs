my $a=<STDIN>;
while($a--)
{
$b=<STDIN>;
$c=<STDIN>;
$b=chomp($b);
$c=chomp($c);

@arrayc={0};
@arrayb={0};
while($b>=1)
{
	@arrayb=(@arrayb,$b);
	$b=$b/2;
	}
while($c>=1)
{
	@arrayc=(@arrayc,$c);
	$c=$c/2;
	}
$ans;$flag=0;
$i=0;
$j=0;

for $i (0..scalar(@arrayb))
{
for $j (0..scalar(@arrayc))
	{
	if($arrayb[$i]==$arrayc[$j])
		{$ans=$i+$j;$flag=1;break;}
	}
   if($flag==1){break;}
}

print $ans."\n";
}