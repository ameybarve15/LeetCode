import java.util.Stack;

/**
 * Valid Palindrome check in java
 * 1. Through extra space using additional data structure of stack
 * 2. Through comparison from beginning and end characters traversal
 */

public class ValidPalindrome {

  public static void main(String[] args) {
    String string = "noon";
    boolean result = isPalindrome(string);
    System.out.println("Example.main string " + string + " is " + result);

    boolean result2 = isPalindrome2(string);
    System.out.println("Example.main string 2 " + string + " is " + result2);
  }


  public static boolean isPalindrome(String input) {
    Stack<Character> stack = new Stack<>();
    if (input == null || input.isEmpty()) {
      return false;
    }
    for (int i = 0; i < input.length(); i++) {
      stack.push(input.charAt(i));
    }

    String compareString = new String();

    while (!stack.isEmpty()) {
      Character pop = stack.pop();
      compareString += pop;
    }

    if (compareString.equals(input)) {
      return true;
    } else {
      return false;
    }
  }

  public static boolean isPalindrome2(String input) {
    if (input == null || input.isEmpty()) {
      return false;
    }

    int i = 0;
    int j = input.length() - 1;

    while (i < j) {
      char c = input.charAt(i);
      char c1 = input.charAt(j);
      i++;
      j--;
      if (c != c1) {
        return false;
      }
    }
    return true;
  }
}