namespace CsharpLearning1
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btSamaus = new System.Windows.Forms.Button();
            this.txbA = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txbB = new System.Windows.Forms.TextBox();
            this.txbC = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.Answer1 = new System.Windows.Forms.Label();
            this.Answer2 = new System.Windows.Forms.Label();
            this.Title = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // btSamaus
            // 
            this.btSamaus.Location = new System.Drawing.Point(22, 85);
            this.btSamaus.Name = "btSamaus";
            this.btSamaus.Size = new System.Drawing.Size(235, 127);
            this.btSamaus.TabIndex = 0;
            this.btSamaus.Text = "Samaus";
            this.btSamaus.UseVisualStyleBackColor = true;
            this.btSamaus.Click += new System.EventHandler(this.btSamaus_Click);
            // 
            // txbA
            // 
            this.txbA.Location = new System.Drawing.Point(397, 85);
            this.txbA.Name = "txbA";
            this.txbA.Size = new System.Drawing.Size(388, 20);
            this.txbA.TabIndex = 1;
            this.txbA.TextChanged += new System.EventHandler(this.txbA_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(300, 85);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(79, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "Please Input A:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(300, 118);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(79, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Please Input B:";
            // 
            // txbB
            // 
            this.txbB.Location = new System.Drawing.Point(397, 118);
            this.txbB.Name = "txbB";
            this.txbB.Size = new System.Drawing.Size(388, 20);
            this.txbB.TabIndex = 4;
            this.txbB.TextChanged += new System.EventHandler(this.txbB_TextChanged);
            // 
            // txbC
            // 
            this.txbC.Location = new System.Drawing.Point(397, 153);
            this.txbC.Name = "txbC";
            this.txbC.Size = new System.Drawing.Size(388, 20);
            this.txbC.TabIndex = 6;
            this.txbC.TextChanged += new System.EventHandler(this.txbC_TextChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(300, 153);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(79, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Please Input C:";
            // 
            // Answer1
            // 
            this.Answer1.AutoSize = true;
            this.Answer1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Answer1.Location = new System.Drawing.Point(529, 206);
            this.Answer1.Name = "Answer1";
            this.Answer1.Size = new System.Drawing.Size(78, 20);
            this.Answer1.TabIndex = 7;
            this.Answer1.Text = "Answer1";
            this.Answer1.Click += new System.EventHandler(this.Answer1_Click);
            // 
            // Answer2
            // 
            this.Answer2.AutoSize = true;
            this.Answer2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Answer2.Location = new System.Drawing.Point(529, 264);
            this.Answer2.Name = "Answer2";
            this.Answer2.Size = new System.Drawing.Size(78, 20);
            this.Answer2.TabIndex = 8;
            this.Answer2.Text = "Answer2";
            // 
            // Title
            // 
            this.Title.AutoSize = true;
            this.Title.Font = new System.Drawing.Font("Arial Rounded MT Bold", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Title.Location = new System.Drawing.Point(58, 19);
            this.Title.Name = "Title";
            this.Title.Size = new System.Drawing.Size(199, 37);
            this.Title.TabIndex = 9;
            this.Title.Text = "Solve For X:";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Arial Rounded MT Bold", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(424, 19);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(287, 37);
            this.label4.TabIndex = 10;
            this.label4.Text = "AX^2 + BX + C = 0";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(28, 227);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(229, 20);
            this.label5.TabIndex = 11;
            this.label5.Text = "Click Samaus For The Answers";
            this.label5.Click += new System.EventHandler(this.label5_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(285, 202);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(161, 24);
            this.label6.TabIndex = 12;
            this.label6.Text = "Show Answer 1:";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(285, 264);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(155, 24);
            this.label7.TabIndex = 13;
            this.label7.Text = "Show Answer2:";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::CsharpLearning1.Properties.Resources.download;
            this.pictureBox1.Location = new System.Drawing.Point(331, 322);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(276, 177);
            this.pictureBox1.TabIndex = 14;
            this.pictureBox1.TabStop = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(869, 511);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.Title);
            this.Controls.Add(this.Answer2);
            this.Controls.Add(this.Answer1);
            this.Controls.Add(this.txbC);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txbB);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txbA);
            this.Controls.Add(this.btSamaus);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btSamaus;
        private System.Windows.Forms.TextBox txbA;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txbB;
        private System.Windows.Forms.TextBox txbC;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label Answer1;
        private System.Windows.Forms.Label Answer2;
        private System.Windows.Forms.Label Title;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.PictureBox pictureBox1;
    }
}

