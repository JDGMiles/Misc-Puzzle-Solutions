function arrAdder(arr) {
  var answer='';
  for(var i=0; i<arr[0].length; i++){
    for(var j=0; j<arr.length; j++){
      answer=answer+arr[j][i];
    }
    answer=answer+" ";
  }
  return answer.substring(0, answer.length-1);

}

// https://www.codewars.com/kata/adding-arrays/train/javascript
