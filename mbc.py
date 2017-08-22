import math
ab=int(raw_input());
bc=int(raw_input());
ac=math.sqrt(ab*ab+bc*bc);
mc=round(ac/2);
d=(math.atan2(ab,bc));
print str(int(round(math.degrees(d))));
