for i in range(0,15) :
    s = ""
    for j in range(0,17) :
        if j == 6 :
            s+=" * * * * I L O V E Y O U <3 * * * * "
            break;
        if( (i+j<2) or (i-j>14 and j<2) or (i-j>4 and j<4 and i+j <12 and i<12) or (j>6 and (j-i > 6 or i+j>22))) :
            s += "    "
        else: s+=" * "
    print(s)