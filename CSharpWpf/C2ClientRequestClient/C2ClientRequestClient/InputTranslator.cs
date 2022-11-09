using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;




namespace C2ClientRequestClient
{
    internal class InputTranslator
    {
        public static string ParseFromNumber(string input)
        {
            int tryparsenum;
            string copystr="";
            if (input[0] == '6' && input[1] == '9')
            {
                for (int i = 0; i < input.Length - 3; i++)
                {
                    copystr += input[i + 3];
                }
                return copystr;
            }
            else if (int.TryParse(input, out tryparsenum))
                return ParseFromNumInput(tryparsenum);
            else
                return "sleep";
        }


        public static string InputToNumTrans(string input)
        {
            if (input[0] == '6' && input[1] == '9')
                return input;
            else
                return BasicParseToNumInput(input);
        }
        


        public static string BasicParseToNumInput(string input)
        {
            switch (input)
            {
                case "sleep":
                    return "00";
                case "pwd":
                    return "01";
                case "ls -al":
                    return "02";
                case "ip":
                    return "03";
                case "ip a":
                    return "04";
                default:
                    break;
            }
            return "00;";
        }
        public static string ParseFromNumInput(int input)
        {
            switch (input)
            {
                case 00:
                    return "sleep";
                case 01:
                    return "pwd";
                case 02:
                    return "ls -al";
                case 03:
                    return "ip only";
                case 04:
                    return "ip a";
                default:
                    break;
            }
            return "00;";
        }
    }
}
