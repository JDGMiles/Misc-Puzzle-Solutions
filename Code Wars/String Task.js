function stringTask(s){
  var answer='';
  for(i=0; i<s.length; i++){
    s[i].toLowerCase();
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
      answer=answer+'.'+s[i];
    }
  }
  return answer;
}

// https://www.codewars.com/kata/string-task/train/javascript
