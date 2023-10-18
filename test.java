import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.Scanner;
public class EncryptPassword{
    public String encryptPassword(String input){
        String encPass=null;
        if(input==null) return null;
        
        try{
            MessageDigest digest=MessageDigest.getInstance("MD5");
            digest.update(input.getBytes(),0,input.length());
            encPass=new BigInteger(1,digest.digest()).toString(16);
        }
        catch(Exception e){
            e.printStackTrace();
        }
        return encPass;
    }
}

public class main{
    public static void main(String[] args){
        EncryptPassword ep=new EncryptPassword();
        String s;
        Scanner sc=new Scanner(System.in);
        sc.nextLine(s);
        String ans = ep.encryptPassword(s);
        System.out.println(ans);
    }
}