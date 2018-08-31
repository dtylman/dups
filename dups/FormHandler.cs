using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace dups
{
    public partial class FormHandler : Form
    {
        public FormHandler()
        {
            InitializeComponent();
            this.toolTip1.SetToolTip(this.btnDoNothing, "Ignore these items and do nothing");
            this.toolTip1.SetToolTip(this.btnLink, "Keep the oldest file and replace other with a symbolic link");
            this.toolTip1.SetToolTip(this.btnScript, "Create a script that will remove all files but the oldest");
            this.toolTip1.SetToolTip(this.btnDelete, "Keep the oldest file and delete the others");
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            
        }

        private void btnDoNothing_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
