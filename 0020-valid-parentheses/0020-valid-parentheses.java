class Solution {
    public boolean isValid(String s) {
      Stack<Character>sk = new Stack();
      for(char c :s.toCharArray()){
            if(c=='(' || c=='['||c=='{'){
                sk.add(c);
            }
                else{
                    if(sk.isEmpty())return false;
                    if(c==']' && sk.peek()!='[')return false;
                    if(c==')' && sk.peek()!='(')return false;
                    if(c=='}' && sk.peek()!='{')return false;
                     sk.pop();
                }
        }
        return sk.isEmpty();
    }
}
                    
                
        