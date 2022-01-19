using System;
    namespace BTListSV
    {
        class SinhVien
        {
            public int MSV;
            public string Name;
            public void display(SinhVien[] sv) 
            {
                int n = sv.Length;
                for(int i =0;i<n;i++)
                {
                     Console.WriteLine($"{sv[i].MSV} {sv[i].Name}");
                }
                   
            }
        }
        class Program
        {
            public static void Main()
            {
                SinhVien[] sv = new SinhVien[2];
                sv[0].MSV = 2020604554;
                sv[0].Name = "Thang";
                sv[1].MSV = 2020601953;
                sv[1].Name = "Thao"; 
                sv[1].display(sv);
            }
        }
    }