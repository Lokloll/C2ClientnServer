using System.Net;
using System.Text;

namespace C2ClientRequestClient
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            HttpWebRequest request = WebRequest.Create("http://localhost/postcmd?command="+ InputTranslator.InputToNumTrans(textBox1.Text)) as HttpWebRequest;
            
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
            
            WebHeaderCollection header = response.Headers;
            
            string responseText;
            var encoding = ASCIIEncoding.ASCII;
            using (var reader = new System.IO.StreamReader(response.GetResponseStream(), encoding))
            {
                responseText = reader.ReadToEnd();
            }
            label3.Text = responseText;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            HttpWebRequest request = WebRequest.Create("http://localhost/getcmd") as HttpWebRequest;

            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            WebHeaderCollection header = response.Headers;

            string responseText;
            var encoding = ASCIIEncoding.ASCII;
            using (var reader = new System.IO.StreamReader(response.GetResponseStream(), encoding))
            {
                responseText = reader.ReadToEnd();
            }
            label4.Text =  responseText;

        }
    }
}