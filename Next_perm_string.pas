unit Next_perm_string;

interface

procedure             swapBy(    a:Pbyte;            b:Pbyte);
procedure             swapCh(var a:Ansichar;   var   b:Ansichar);
procedure            reverse(var s:AnsiString; const     a,   x_:byte);
function  D_next_permutation(var s:AnsiString; const first, end_:byte) : boolean;

implementation
//uses System.Diagnostics;


procedure swapBy( a:Pbyte ; b:Pbyte );    inline;
begin
    if a <> b then begin
       a^ := a^ + b^;
       b^ := a^ - b^;
       a^ := a^ - b^ ;
    end;
end;

procedure swapCh( var a : Ansichar; var b : Ansichar );   inline;
var c :  Ansichar;
begin
    if a<>b then begin
       c := a;  a := b;  b := c;
    end;
end;


procedure reverse(var s:AnsiString; const a,x_:byte);  inline;
var
    i,j : word;
    //t   : string;
begin                          //  x_ is one past the end of reverse section
   if  a  = x_-1    then  exit;
   j     := (x_ - a) shr 1;    //  trunc( (x_ - a)/2 );
   for i := 1 to j do
            //swapCh( s[a-1+i] , s[x_-i] );
            swapBy( @s[a-1+i] , @s[x_-i] );
end;

//  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -

procedure swap2(var s: AnsiString; const a, b: byte); //inline;
var
    tmpChar   : Byte;
    SBytes    : pByte absolute s;
begin
        dec(SBytes);
        //writeln('  inswap  .',s,'.  ',a,'  ',b,'  ',SBytes[a],'  ',SBytes[b]);

    tmpChar   := SBytes[a];
    SBytes[a] := SBytes[b];
    SBytes[b] := tmpChar;
//    if a<>b then begin
//       c := a;  a := b;  b := c;
//    end;
//    writeln('  inswap  .',s,'.  ',a,'  ',b,'  ',SBytes[a],'  ',SBytes[b]);
end;


procedure reverse2(var s: AnsiString; const a, x: byte); //inline;
var
    i, j    : word;

begin
    if a = x - 1 then
      exit;
    j := (x - a) shr 1;     //  trunc((x-a)/2);
    for i := 1 to j do
      swap2( s, a-1+i, x-i );
//    begin
//      tmpChar := SBytes[a - 1 + i];
//      SBytes[a - 1 + i] := SBytes[x - i];
//      SBytes[x - i] := tmpChar;
//    end;
end;

//  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -

function  D_next_permutation(var s : AnsiString; const first, end_ : byte) : boolean;  // inline;
var
	i, ii, j : byte;

begin
	if first  =  end_        then exit(false);    //begin result := false; exit; end;
	    i    :=  first + 1;
	if  i     =  end_        then exit(false);    //begin result := false; exit; end;
	    i    :=  end_  - 1;

	while true do begin
      ii := i;  dec(i);

      if s[i] < s[ii] then begin

        j := end_;
        repeat dec(j); until     s[i] < s[j];

        swapCh( s[i] , s[j] );
        //swapBy( @s[i], @s[j] );
        //reverse(s, ii, end_);
//        writeln('swap  ',s,'  ',i,'  ',j);
        //swap2(s, i, j);
//        writeln('swap  ',s,'  ',i,'  ',j);
//        writeln;
        reverse(s, ii, end_);
        result := true;
        exit;
      end;

      if i = first then begin
        reverse(s, first, end_);
        result := false;
        exit;
      end;
	end;

end;


end.



//  var ↆ← : byte = 1;   // → ⇨ ⌦  ⏎ ➡  ← →

