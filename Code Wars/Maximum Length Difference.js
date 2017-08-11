function mxdiflg(a1, a2) {
  var a1min, a1max, a2min, a2max;
  if(a1.length==0 || a2.length==0){return -1;}
  else{
    a1min=a1[0].length;
    a2min=a2[0].length;
    a1max=a1[0].length;
    a2max=a2[0].length;
    for(var i=1; i<a1.length; i++){
      if(a1[i].length<a1min){a1min=a1[i].length}
      if(a1[i].length>a1max){a1max=a1[i].length}
    }
    for(var i=1; i<a2.length; i++){
      if(a2[i].length<a2min){a2min=a2[i].length}
      if(a2[i].length>a2max){a2max=a2[i].length}
    }
    return Math.max(a1max-a2min, a2max-a1min);
  }
}

// https://www.codewars.com/kata/maximum-length-difference/train/javascript
