using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;


namespace CsharpLearning1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string sColor = "#FFACE1AF";// Hex value of any color
            Int32 iColorInt = Convert.ToInt32(sColor.Substring(1), 16);
            Color curveColor = System.Drawing.Color.FromArgb(iColorInt);
            this.BackColor = curveColor;
        }

        private void btSamaus_Click(object sender, EventArgs e)
        {
            //MessageBox.Show(txbA.Text);
            Equation_Solution();
        }
        private void Equation_Solution()
        {
            double a = 0.0;
            double b = 0.0;
            double c = 0.0;
            double answer1 = 0.0;
            double answer2 = 0.0;
            // cout << "Solve For X Equation ax^2 + bx + c = 0";
            string s = " ";
            s = txbA.Text;
            try
            {
                a = double.Parse(s);
                
            }
            catch (FormatException)
            {
                MessageBox.Show("Invaild Input For A" + s, "Samaus");
                return;
            }
            s = txbB.Text;
            try
            {
                b = double.Parse(s);

            }
            catch (FormatException)
            {
                MessageBox.Show("Invaild Input For B" + s, "Samaus");
                return;
            }
            s = txbC.Text;
            try
            {
                c = double.Parse(s);

            }
            catch (FormatException)
            {
                MessageBox.Show("Invaild Input For C" + s, "Samaus");
                return;
            }
            if (a == 0)
            {
                answer1 = (-1) * (c / b);
                Answer1.Text = answer1.ToString();
                //     cout << "The Answer is: " << answer1 << endl;
                return; 
            }
            if ((b * b) < (4 * a * c))
            {
                //      cout << "Math Error" << endl;
                MessageBox.Show("Math Error");
            }

            else
            {
                answer1 = ((-1) * b + Math.Sqrt(b * b - 4 * a * c)) / (2 * a);
                answer2 = ((-1) * b - Math.Sqrt(b * b - 4 * a * c)) / (2 * a);
                Answer1.Text = answer1.ToString();
                Answer2.Text = answer2.ToString();
             //   cout << "The First Answer is: " << answer1 << endl;
             //   cout << "The Second Answer is: " << answer2;
            }
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void Answer1_Click(object sender, EventArgs e)
        {

        }

        private void txbA_TextChanged(object sender, EventArgs e)
        {

        }

        private void txbB_TextChanged(object sender, EventArgs e)
        {

        }

        private void txbC_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
