# Table of content
- [Sliding Window](#sliding-window)
    - [Question :](#CountAnagramsOccourances)
         -HashMap to store the frequencies of all the characters present in string 'p'.
         -count variable to check when all the characters present in the map have frequencies zero,which implies that an anagram is found.
         -if a character is found which is present in the map then decrease it's frequency by 1.
         -if the frequency of a particular character in the map is zero it implies that all the occurences of that particular character is found
         -in the current window size.
         -if the count is equal is zero it means that an anagram is found.
         -if an anargram is found then push the starting index of the window.
         -while sliding the window check if that character is present in the map then increase it's frequency by one as we have decreased the -frequency of that character when it was first encountered while traversing the window.
    ### Advantages
    -TC : O(n)
    -SC : O(N)    
    -much better than naive sol which repeatedly loops from each element and check if the substring is anagram or not     
               
  