  
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Add(object sender, EventArgs e)
        {
            try
            {
                ResultTextBox.Text = Convert.ToString(
                Convert.ToDouble(Op1TextBox.Text) +
                Convert.ToDouble(Op2TextBox.Text)
                );
            }
            catch
            {
                MessageBox.Show("Error in operands!",
                "Calculator Error", MessageBoxButtons.OK,
                MessageBoxIcon.Error);
            }
        }

        private void Sub(object sender, EventArgs e)
        {
            try
            {
                ResultTextBox.Text = Convert.ToString(
                Convert.ToDouble(Op1TextBox.Text) -
                Convert.ToDouble(Op2TextBox.Text)
                );
            }
            catch
            {
                MessageBox.Show("Error in operands!",
                "Calculator Error", MessageBoxButtons.OK,
                MessageBoxIcon.Error);
            }
        }

        private void Mul(object sender, EventArgs e)
        {
            try
            {
                ResultTextBox.Text = Convert.ToString(
                Convert.ToDouble(Op1TextBox.Text) *
                Convert.ToDouble(Op2TextBox.Text)
                );
            }
            catch
            {
                MessageBox.Show("Error in operands!",
                "Calculator Error", MessageBoxButtons.OK,
                MessageBoxIcon.Error);
            }
        }

        private void Div(object sender, EventArgs e)
        {
            try
            {
                ResultTextBox.Text = Convert.ToString(
                Convert.ToDouble(Op1TextBox.Text) /
                Convert.ToDouble(Op2TextBox.Text)
                );
            }
            catch
            {
                MessageBox.Show("Error in operands!",
                "Calculator Error", MessageBoxButtons.OK,
                MessageBoxIcon.Error);
            }
        }

        private void Exit(object sender, EventArgs e)
        {
            Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            ImgExitButton.Image = (Image)(new Bitmap(ImgExitButton.Image, new Size(ImgExitButton.Size.Width / 2, ImgExitButton.Size.Height)));
            ImgAddButton.Image = (Image)(new Bitmap(ImgAddButton.Image, new Size(ImgAddButton.Size.Width, ImgAddButton.Size.Height)));
            ImgSubButton.Image = (Image)(new Bitmap(ImgSubButton.Image, new Size(ImgSubButton.Size.Width, ImgSubButton.Size.Height)));
            ImgMulButton.Image = (Image)(new Bitmap(ImgMulButton.Image, new Size(ImgMulButton.Size.Width, ImgMulButton.Size.Height)));
            ImgDivButton.Image = (Image)(new Bitmap(ImgDivButton.Image, new Size(ImgDivButton.Size.Width, ImgDivButton.Size.Height)));
        }
    }
}
