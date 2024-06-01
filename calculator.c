namespace Kalkulator_Hasan
{
    public partial class Form1 : Form
    {
        decimal bilangan1;
        decimal bilangan2;
        int opr;
        Boolean opr_selesai = false;

        public Form1()
        {
            InitializeComponent();
        }

        private void angka0_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "0")
            {
                textBox1.Text += "0";
            }
            else
            {
                textBox1.Text = "0";
            }
        }

        private void angka1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "1";
            }
            else
            {
                textBox1.Text += "1";
            }
        }

        private void angka2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "2";
            }
            else
            {
                textBox1.Text += "2";
            }
        }

        private void angka3_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "3";
            }
            else
            {
                textBox1.Text += "3";
            }
        }

        private void angka4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "4";
            }
            else
            {
                textBox1.Text += "4";
            }
        }

        private void angka5_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "5";
            }
            else
            {
                textBox1.Text += "5";
            }
        }

        private void angak6_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "6";
            }
            else
            {
                textBox1.Text += "6";
            }
        }

        private void angka7_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "7";
            }
            else
            {
                textBox1.Text += "7";
            }
        }

        private void angka8_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "8";
            }
            else
            {
                textBox1.Text += "8";
            }
        }

        private void angka9_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "9";
            }
            else
            {
                textBox1.Text += "9";
            }
        }

        private void tombolclear_Click(object sender, EventArgs e)
        {
            textBox1.Text = "0";
            bilangan1 = 0;
            bilangan2 = 0;
            textBox2.Text = "";
        }

        private void bagi_Click(object sender, EventArgs e)
        {
            bilangan1 = Convert.ToDecimal(textBox1.Text);
            textBox2.Text = "/";
            textBox1.Text = "0";
            opr = 2;
            opr_selesai = true;
        }

        private void kali_Click(object sender, EventArgs e)
        {
            bilangan1 = Convert.ToDecimal(textBox1.Text);
            textBox2.Text = "x";
            textBox1.Text = "0";
            opr = 1;
            opr_selesai = true;
        }

        private void kurang_Click(object sender, EventArgs e)
        {
            bilangan1 = Convert.ToDecimal(textBox1.Text);
            textBox2.Text = "-";
            textBox1.Text = "0";
            opr = 3;
            opr_selesai = true;
        }

        private void tambah_Click(object sender, EventArgs e)
        {
            bilangan1 = Convert.ToDecimal(textBox1.Text);
            textBox2.Text = "+";
            textBox1.Text = "0";
            opr = 4;
            opr_selesai = true;
        }

        private void samadengan_Click(object sender, EventArgs e)
        {
            if (opr_selesai)
            {
                bilangan2 = Convert.ToDecimal(textBox1.Text);
                switch (opr)
                {
                    case 1:
                        textBox1.Text = (bilangan1 * bilangan2).ToString();
                        break;
                    case 2:
                        textBox1.Text = (bilangan1 / bilangan2).ToString();
                        break;
                    case 3:
                        textBox1.Text = (bilangan1 - bilangan2).ToString();
                        break;
                    case 4:
                        textBox1.Text = (bilangan1 + bilangan2).ToString();
                        break;
                }
                opr_selesai = false;
                textBox2.Text = "";
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
