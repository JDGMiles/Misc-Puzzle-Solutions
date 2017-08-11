function foldTo(distance) {
  if(distance<=0){return null;}
  else if(distance<0.0001){return 0;}
  else{
    return Math.floor(Math.log(distance/0.0001)/Math.log(2)+1);
  }

}

// https://www.codewars.com/kata/folding-your-way-to-the-moon/train/javascript
