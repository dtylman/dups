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
    public partial class FormDups : Form
    {
        private FormHandler formHandler;

        public FormDups()
        {
            InitializeComponent();
        }

        private void ExitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void ToolStripButtonAdd_Click(object sender, EventArgs e)
        {
            DialogResult dr = this.folderBrowserDialog.ShowDialog();
            if (dr == DialogResult.OK)
            {
                this.checkedListBoxFolders.Items.Add(this.folderBrowserDialog.SelectedPath, true);
            }
        }

        private void ToolStripButtonRemove_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < this.checkedListBoxFolders.Items.Count; i++)
            {
                if (!this.checkedListBoxFolders.GetItemChecked(i))
                {
                    this.checkedListBoxFolders.Items.RemoveAt(i);
                }
            }
        }

        private void testToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (this.formHandler == null)
            {
                this.formHandler = new FormHandler();
            }
            this.formHandler.ShowDialog(this);
            
        }

        private void toolStripButtonStart_Click(object sender, EventArgs e)
        {
            
        }
    }
}
