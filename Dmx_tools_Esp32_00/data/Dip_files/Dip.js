var max=511,ext=".gif",imgs=[];
imgs[0]=new Image;imgs[0].src="./DMX Calculator riri_files/on1.gif";
imgs[1]=new Image;imgs[1].src="./DMX Calculator riri_files/off1.gif";
imgs[2]=new Image;imgs[2].src="./DMX Calculator riri_files/on2.gif";
imgs[3]=new Image;imgs[3].src="./DMX Calculator riri_files/off2.gif";
imgs[4]=new Image;imgs[4].src="./DMX Calculator riri_files/on3.gif";
imgs[5]=new Image;imgs[5].src="./DMX Calculator riri_files/off3.gif";
imgs[6]=new Image;imgs[6].src="./DMX Calculator riri_files/on4.gif";
imgs[7]=new Image;imgs[7].src="./DMX Calculator riri_files/off4.gif";
imgs[8]=new Image;imgs[8].src="./DMX Calculator riri_files/on5.gif";
imgs[9]=new Image;imgs[9].src="./DMX Calculator riri_files/off5.gif";
imgs[10]=new Image;imgs[10].src="./DMX Calculator riri_files/on6.gif";
imgs[11]=new Image;imgs[11].src="./DMX Calculator riri_files/off6.gif";
imgs[12]=new Image;imgs[12].src="./DMX Calculator riri_files/on7.gif";
imgs[13]=new Image;imgs[13].src="./DMX Calculator riri_files/off7.gif";
imgs[14]=new Image;imgs[14].src="./DMX Calculator riri_files/on8.gif";
imgs[15]=new Image;imgs[15].src="./DMX Calculator riri_files/off8.gif";
imgs[16]=new Image;imgs[16].src="./DMX Calculator riri_files/on9.gif";
imgs[17]=new Image;imgs[17].src="./DMX Calculator riri_files/off9.gif";
var maxlength=decToBin(max).toString().length;d=/^\d+$/;
function initPic(a){p=a.picnum.value;p/=1;p>max?(alert("Input out of range"),a.picnum.focus(),a.picnum.select()):showPic(p);
return!1}
function chgPic(a,b){p+=b;p=p>max?0:0>p?max:p;showPic(p);a.picnum.value=p}
function showPic(a){sws=decToBin(a);
for(sw=sws.toString();sw.length<maxlength;)sw="0"+sw;
for(i=0;i<sw.length;i++)img="1"==sw.charAt(sw.length-i-1)?"on":"off",document.getElementById("sw"+i).src="./DMX Calculator riri_files/"+img+(i+1)+ext}
function decToBin(a){for(var b="",c;0!=a;)c=a%2,b=c+b,a=Math.floor(a/2);return b};
