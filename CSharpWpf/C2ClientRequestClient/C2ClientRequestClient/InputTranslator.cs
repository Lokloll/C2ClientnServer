using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C2ClientRequestClient
{
    internal class InputTranslator
    {
        public static string ParseInput(string input)
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
    }
}
