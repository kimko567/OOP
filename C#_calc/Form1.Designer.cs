
namespace Calculator
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.MenuStrip = new System.Windows.Forms.MenuStrip();
            this.MenuStripOptions = new System.Windows.Forms.ToolStripMenuItem();
            this.OptionsAdd = new System.Windows.Forms.ToolStripMenuItem();
            this.OptionsSubstract = new System.Windows.Forms.ToolStripMenuItem();
            this.OptionsMultiply = new System.Windows.Forms.ToolStripMenuItem();
            this.OptionsDivide = new System.Windows.Forms.ToolStripMenuItem();
            this.MenuStripExit = new System.Windows.Forms.ToolStripMenuItem();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.ContextAdd = new System.Windows.Forms.ToolStripMenuItem();
            this.ContextSub = new System.Windows.Forms.ToolStripMenuItem();
            this.ContextMul = new System.Windows.Forms.ToolStripMenuItem();
            this.ContextDiv = new System.Windows.Forms.ToolStripMenuItem();
            this.panel1 = new System.Windows.Forms.Panel();
            this.DivButton = new System.Windows.Forms.Button();
            this.MulButton = new System.Windows.Forms.Button();
            this.SubButton = new System.Windows.Forms.Button();
            this.AddButton = new System.Windows.Forms.Button();
            this.ResultTextBox = new System.Windows.Forms.TextBox();
            this.Op2TextBox = new System.Windows.Forms.TextBox();
            this.Op1TextBox = new System.Windows.Forms.TextBox();
            this.ResultLabel = new System.Windows.Forms.Label();
            this.Op2Label = new System.Windows.Forms.Label();
            this.Op1Label = new System.Windows.Forms.Label();
            this.panel2 = new System.Windows.Forms.Panel();
            this.ImgExitButton = new System.Windows.Forms.Button();
            this.ImgDivButton = new System.Windows.Forms.Button();
            this.ImgMulButton = new System.Windows.Forms.Button();
            this.ImgSubButton = new System.Windows.Forms.Button();
            this.ImgAddButton = new System.Windows.Forms.Button();
            this.MenuStrip.SuspendLayout();
            this.contextMenuStrip1.SuspendLayout();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.SuspendLayout();
            // 
            // MenuStrip
            // 
            this.MenuStrip.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.MenuStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.MenuStripOptions,
            this.MenuStripExit});
            this.MenuStrip.Location = new System.Drawing.Point(0, 0);
            this.MenuStrip.Name = "MenuStrip";
            this.MenuStrip.Size = new System.Drawing.Size(382, 28);
            this.MenuStrip.TabIndex = 0;
            this.MenuStrip.Text = "menuStrip1";
            // 
            // MenuStripOptions
            // 
            this.MenuStripOptions.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.OptionsAdd,
            this.OptionsSubstract,
            this.OptionsMultiply,
            this.OptionsDivide});
            this.MenuStripOptions.Name = "MenuStripOptions";
            this.MenuStripOptions.Size = new System.Drawing.Size(75, 24);
            this.MenuStripOptions.Text = "Options";
            // 
            // OptionsAdd
            // 
            this.OptionsAdd.Name = "OptionsAdd";
            this.OptionsAdd.Size = new System.Drawing.Size(153, 26);
            this.OptionsAdd.Text = "Add";
            this.OptionsAdd.Click += new System.EventHandler(this.Add);
            // 
            // OptionsSubstract
            // 
            this.OptionsSubstract.Name = "OptionsSubstract";
            this.OptionsSubstract.Size = new System.Drawing.Size(153, 26);
            this.OptionsSubstract.Text = "Substract";
            this.OptionsSubstract.Click += new System.EventHandler(this.Sub);
            // 
            // OptionsMultiply
            // 
            this.OptionsMultiply.Name = "OptionsMultiply";
            this.OptionsMultiply.Size = new System.Drawing.Size(153, 26);
            this.OptionsMultiply.Text = "Multiply";
            this.OptionsMultiply.Click += new System.EventHandler(this.Mul);
            // 
            // OptionsDivide
            // 
            this.OptionsDivide.Name = "OptionsDivide";
            this.OptionsDivide.Size = new System.Drawing.Size(153, 26);
            this.OptionsDivide.Text = "Divide";
            this.OptionsDivide.Click += new System.EventHandler(this.Div);
            // 
            // MenuStripExit
            // 
            this.MenuStripExit.Name = "MenuStripExit";
            this.MenuStripExit.Size = new System.Drawing.Size(47, 24);
            this.MenuStripExit.Text = "Exit";
            this.MenuStripExit.Click += new System.EventHandler(this.Exit);
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.ContextAdd,
            this.ContextSub,
            this.ContextMul,
            this.ContextDiv});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(140, 100);
            // 
            // ContextAdd
            // 
            this.ContextAdd.Name = "ContextAdd";
            this.ContextAdd.Size = new System.Drawing.Size(139, 24);
            this.ContextAdd.Text = "Add";
            this.ContextAdd.Click += new System.EventHandler(this.Add);
            // 
            // ContextSub
            // 
            this.ContextSub.Name = "ContextSub";
            this.ContextSub.Size = new System.Drawing.Size(139, 24);
            this.ContextSub.Text = "Substract";
            this.ContextSub.Click += new System.EventHandler(this.Sub);
            // 
            // ContextMul
            // 
            this.ContextMul.Name = "ContextMul";
            this.ContextMul.Size = new System.Drawing.Size(139, 24);
            this.ContextMul.Text = "Multiply";
            this.ContextMul.Click += new System.EventHandler(this.Mul);
            // 
            // ContextDiv
            // 
            this.ContextDiv.Name = "ContextDiv";
            this.ContextDiv.Size = new System.Drawing.Size(139, 24);
            this.ContextDiv.Text = "Divide";
            this.ContextDiv.Click += new System.EventHandler(this.Div);
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.DivButton);
            this.panel1.Controls.Add(this.MulButton);
            this.panel1.Controls.Add(this.SubButton);
            this.panel1.Controls.Add(this.AddButton);
            this.panel1.Controls.Add(this.ResultTextBox);
            this.panel1.Controls.Add(this.Op2TextBox);
            this.panel1.Controls.Add(this.Op1TextBox);
            this.panel1.Controls.Add(this.ResultLabel);
            this.panel1.Controls.Add(this.Op2Label);
            this.panel1.Controls.Add(this.Op1Label);
            this.panel1.Location = new System.Drawing.Point(12, 101);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(350, 240);
            this.panel1.TabIndex = 1;
            // 
            // DivButton
            // 
            this.DivButton.Location = new System.Drawing.Point(300, 168);
            this.DivButton.Name = "DivButton";
            this.DivButton.Size = new System.Drawing.Size(50, 50);
            this.DivButton.TabIndex = 9;
            this.DivButton.Text = "Div";
            this.DivButton.UseVisualStyleBackColor = true;
            this.DivButton.Click += new System.EventHandler(this.Div);
            // 
            // MulButton
            // 
            this.MulButton.Location = new System.Drawing.Point(300, 112);
            this.MulButton.Name = "MulButton";
            this.MulButton.Size = new System.Drawing.Size(50, 50);
            this.MulButton.TabIndex = 8;
            this.MulButton.Text = "Mul";
            this.MulButton.UseVisualStyleBackColor = true;
            this.MulButton.Click += new System.EventHandler(this.Mul);
            // 
            // SubButton
            // 
            this.SubButton.Location = new System.Drawing.Point(300, 56);
            this.SubButton.Name = "SubButton";
            this.SubButton.Size = new System.Drawing.Size(50, 50);
            this.SubButton.TabIndex = 7;
            this.SubButton.Text = "Sub";
            this.SubButton.UseVisualStyleBackColor = true;
            this.SubButton.Click += new System.EventHandler(this.Sub);
            // 
            // AddButton
            // 
            this.AddButton.Location = new System.Drawing.Point(300, 0);
            this.AddButton.Name = "AddButton";
            this.AddButton.Size = new System.Drawing.Size(50, 50);
            this.AddButton.TabIndex = 6;
            this.AddButton.Text = "Add";
            this.AddButton.UseVisualStyleBackColor = true;
            this.AddButton.Click += new System.EventHandler(this.Add);
            // 
            // ResultTextBox
            // 
            this.ResultTextBox.Location = new System.Drawing.Point(141, 165);
            this.ResultTextBox.Name = "ResultTextBox";
            this.ResultTextBox.Size = new System.Drawing.Size(125, 27);
            this.ResultTextBox.TabIndex = 5;
            // 
            // Op2TextBox
            // 
            this.Op2TextBox.Location = new System.Drawing.Point(141, 101);
            this.Op2TextBox.Name = "Op2TextBox";
            this.Op2TextBox.Size = new System.Drawing.Size(125, 27);
            this.Op2TextBox.TabIndex = 4;
            // 
            // Op1TextBox
            // 
            this.Op1TextBox.Location = new System.Drawing.Point(141, 41);
            this.Op1TextBox.Name = "Op1TextBox";
            this.Op1TextBox.Size = new System.Drawing.Size(125, 27);
            this.Op1TextBox.TabIndex = 3;
            // 
            // ResultLabel
            // 
            this.ResultLabel.AutoSize = true;
            this.ResultLabel.Location = new System.Drawing.Point(12, 172);
            this.ResultLabel.Name = "ResultLabel";
            this.ResultLabel.Size = new System.Drawing.Size(52, 20);
            this.ResultLabel.TabIndex = 2;
            this.ResultLabel.Text = "Result:";
            // 
            // Op2Label
            // 
            this.Op2Label.AutoSize = true;
            this.Op2Label.Location = new System.Drawing.Point(12, 104);
            this.Op2Label.Name = "Op2Label";
            this.Op2Label.Size = new System.Drawing.Size(97, 20);
            this.Op2Label.TabIndex = 1;
            this.Op2Label.Text = "2nd operand:";
            // 
            // Op1Label
            // 
            this.Op1Label.AutoSize = true;
            this.Op1Label.Location = new System.Drawing.Point(12, 41);
            this.Op1Label.Name = "Op1Label";
            this.Op1Label.Size = new System.Drawing.Size(91, 20);
            this.Op1Label.TabIndex = 0;
            this.Op1Label.Text = "1st operand:";
            // 
            // panel2
            // 
            this.panel2.Controls.Add(this.ImgExitButton);
            this.panel2.Controls.Add(this.ImgDivButton);
            this.panel2.Controls.Add(this.ImgMulButton);
            this.panel2.Controls.Add(this.ImgSubButton);
            this.panel2.Controls.Add(this.ImgAddButton);
            this.panel2.Location = new System.Drawing.Point(12, 32);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(350, 53);
            this.panel2.TabIndex = 2;
            // 
            // ImgExitButton
            // 
            this.ImgExitButton.Image = ((System.Drawing.Image)(resources.GetObject("ImgExitButton.Image")));
            this.ImgExitButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.ImgExitButton.Location = new System.Drawing.Point(262, 0);
            this.ImgExitButton.Name = "ImgExitButton";
            this.ImgExitButton.Size = new System.Drawing.Size(88, 53);
            this.ImgExitButton.TabIndex = 4;
            this.ImgExitButton.Text = "Exit";
            this.ImgExitButton.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            this.ImgExitButton.UseVisualStyleBackColor = true;
            this.ImgExitButton.Click += new System.EventHandler(this.Exit);
            // 
            // ImgDivButton
            // 
            this.ImgDivButton.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ImgDivButton.Image = ((System.Drawing.Image)(resources.GetObject("ImgDivButton.Image")));
            this.ImgDivButton.Location = new System.Drawing.Point(177, 0);
            this.ImgDivButton.Name = "ImgDivButton";
            this.ImgDivButton.Size = new System.Drawing.Size(53, 53);
            this.ImgDivButton.TabIndex = 3;
            this.ImgDivButton.UseVisualStyleBackColor = true;
            this.ImgDivButton.Click += new System.EventHandler(this.Div);
            // 
            // ImgMulButton
            // 
            this.ImgMulButton.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ImgMulButton.Image = ((System.Drawing.Image)(resources.GetObject("ImgMulButton.Image")));
            this.ImgMulButton.Location = new System.Drawing.Point(118, -1);
            this.ImgMulButton.Name = "ImgMulButton";
            this.ImgMulButton.Size = new System.Drawing.Size(53, 53);
            this.ImgMulButton.TabIndex = 2;
            this.ImgMulButton.UseVisualStyleBackColor = true;
            this.ImgMulButton.Click += new System.EventHandler(this.Mul);
            // 
            // ImgSubButton
            // 
            this.ImgSubButton.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ImgSubButton.Image = ((System.Drawing.Image)(resources.GetObject("ImgSubButton.Image")));
            this.ImgSubButton.Location = new System.Drawing.Point(59, 0);
            this.ImgSubButton.Name = "ImgSubButton";
            this.ImgSubButton.Size = new System.Drawing.Size(53, 53);
            this.ImgSubButton.TabIndex = 1;
            this.ImgSubButton.UseVisualStyleBackColor = true;
            this.ImgSubButton.Click += new System.EventHandler(this.Sub);
            // 
            // ImgAddButton
            // 
            this.ImgAddButton.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ImgAddButton.Image = ((System.Drawing.Image)(resources.GetObject("ImgAddButton.Image")));
            this.ImgAddButton.Location = new System.Drawing.Point(0, 0);
            this.ImgAddButton.Name = "ImgAddButton";
            this.ImgAddButton.Size = new System.Drawing.Size(53, 53);
            this.ImgAddButton.TabIndex = 0;
            this.ImgAddButton.UseVisualStyleBackColor = true;
            this.ImgAddButton.Click += new System.EventHandler(this.Add);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(382, 353);
            this.ContextMenuStrip = this.contextMenuStrip1;
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.MenuStrip);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MainMenuStrip = this.MenuStrip;
            this.MaximizeBox = false;
            this.MaximumSize = new System.Drawing.Size(400, 400);
            this.MinimizeBox = false;
            this.MinimumSize = new System.Drawing.Size(400, 400);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Calculator";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.MenuStrip.ResumeLayout(false);
            this.MenuStrip.PerformLayout();
            this.contextMenuStrip1.ResumeLayout(false);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip MenuStrip;
        private System.Windows.Forms.ToolStripMenuItem MenuStripOptions;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem ContextAdd;
        private System.Windows.Forms.ToolStripMenuItem toolStripMenuItem8;
        private System.Windows.Forms.ToolStripMenuItem toolStripMenuItem9;
        private System.Windows.Forms.ToolStripMenuItem toolStripMenuItem10;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label ResultLabel;
        private System.Windows.Forms.Label Op2Label;
        private System.Windows.Forms.Label Op1Label;
        private System.Windows.Forms.Button DivButton;
        private System.Windows.Forms.Button MulButton;
        private System.Windows.Forms.Button SubButton;
        private System.Windows.Forms.Button AddButton;
        private System.Windows.Forms.TextBox ResultTextBox;
        private System.Windows.Forms.TextBox Op2TextBox;
        private System.Windows.Forms.TextBox Op1TextBox;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Button ImgExitButton;
        private System.Windows.Forms.Button ImgDivButton;
        private System.Windows.Forms.Button ImgMulButton;
        private System.Windows.Forms.Button ImgSubButton;
        private System.Windows.Forms.Button ImgAddButton;
        private System.Windows.Forms.ToolStripMenuItem OptionsAdd;
        private System.Windows.Forms.ToolStripMenuItem OptionsSubstract;
        private System.Windows.Forms.ToolStripMenuItem OptionsMultiply;
        private System.Windows.Forms.ToolStripMenuItem OptionsDivide;
        private System.Windows.Forms.ToolStripMenuItem MenuStripExit;
        private System.Windows.Forms.ToolStripMenuItem ContextSub;
        private System.Windows.Forms.ToolStripMenuItem ContextMul;
        private System.Windows.Forms.ToolStripMenuItem ContextDiv;
    }
}
