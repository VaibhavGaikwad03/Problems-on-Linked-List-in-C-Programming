package MyPackage;

import java.lang.*;
import java.util.*;

public class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void finalize()
    {
        Arr = null;
        System.gc();
    }

    public void Accept()
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the data : ");
        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt(); 
        }
    }
    public void Display()
    {
        System.out.println("Entered data from array : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print("|"+Arr[i]);
        }
        System.out.println("|");
    }
}