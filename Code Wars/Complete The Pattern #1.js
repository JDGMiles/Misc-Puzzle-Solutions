function pattern(n){
 var output="";
 for(var i=1; i<n+1; n++){
   for(var j=0; j<i; j++){
     output=output+''+i;
    }
  output=output+'\n'
  }
 return output;
}
// https://www.codewars.com/kata/complete-the-pattern-number-1/train/javascript
