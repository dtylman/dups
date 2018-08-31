namespace dups
{
    partial class FormHandler
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
            this.components = new System.ComponentModel.Container();
            this.contextMenuStrip = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.openToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.showInFolderToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.deleteFileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.panelButtons = new System.Windows.Forms.Panel();
            this.checkBoxDoTheSame = new System.Windows.Forms.CheckBox();
            this.btnLink = new System.Windows.Forms.Button();
            this.btnDoNothing = new System.Windows.Forms.Button();
            this.btnScript = new System.Windows.Forms.Button();
            this.btnDelete = new System.Windows.Forms.Button();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.listBoxFiles = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.contextMenuStrip.SuspendLayout();
            this.panelButtons.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.SuspendLayout();
            // 
            // contextMenuStrip
            // 
            this.contextMenuStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.openToolStripMenuItem,
            this.showInFolderToolStripMenuItem,
            this.deleteFileToolStripMenuItem});
            this.contextMenuStrip.Name = "contextMenuStrip";
            this.contextMenuStrip.Size = new System.Drawing.Size(153, 70);
            // 
            // openToolStripMenuItem
            // 
            this.openToolStripMenuItem.Name = "openToolStripMenuItem";
            this.openToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.openToolStripMenuItem.Text = "Open";
            // 
            // showInFolderToolStripMenuItem
            // 
            this.showInFolderToolStripMenuItem.Name = "showInFolderToolStripMenuItem";
            this.showInFolderToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.showInFolderToolStripMenuItem.Text = "Show In Folder";
            // 
            // deleteFileToolStripMenuItem
            // 
            this.deleteFileToolStripMenuItem.Name = "deleteFileToolStripMenuItem";
            this.deleteFileToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.deleteFileToolStripMenuItem.Text = "Delete File";
            // 
            // panelButtons
            // 
            this.panelButtons.Controls.Add(this.checkBoxDoTheSame);
            this.panelButtons.Controls.Add(this.btnLink);
            this.panelButtons.Controls.Add(this.btnDoNothing);
            this.panelButtons.Controls.Add(this.btnScript);
            this.panelButtons.Controls.Add(this.btnDelete);
            this.panelButtons.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panelButtons.Location = new System.Drawing.Point(0, 0);
            this.panelButtons.Name = "panelButtons";
            this.panelButtons.Size = new System.Drawing.Size(810, 44);
            this.panelButtons.TabIndex = 2;
            // 
            // checkBoxDoTheSame
            // 
            this.checkBoxDoTheSame.AutoSize = true;
            this.checkBoxDoTheSame.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.checkBoxDoTheSame.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(177)));
            this.checkBoxDoTheSame.Location = new System.Drawing.Point(529, 7);
            this.checkBoxDoTheSame.Name = "checkBoxDoTheSame";
            this.checkBoxDoTheSame.Size = new System.Drawing.Size(179, 20);
            this.checkBoxDoTheSame.TabIndex = 4;
            this.checkBoxDoTheSame.Text = "Do The Same for all items";
            this.checkBoxDoTheSame.UseVisualStyleBackColor = true;
            // 
            // btnLink
            // 
            this.btnLink.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnLink.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(177)));
            this.btnLink.Location = new System.Drawing.Point(272, 6);
            this.btnLink.Name = "btnLink";
            this.btnLink.Size = new System.Drawing.Size(100, 23);
            this.btnLink.TabIndex = 3;
            this.btnLink.Text = "Link";
            this.btnLink.UseVisualStyleBackColor = true;
            // 
            // btnDoNothing
            // 
            this.btnDoNothing.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnDoNothing.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(177)));
            this.btnDoNothing.Location = new System.Drawing.Point(24, 6);
            this.btnDoNothing.Name = "btnDoNothing";
            this.btnDoNothing.Size = new System.Drawing.Size(100, 23);
            this.btnDoNothing.TabIndex = 2;
            this.btnDoNothing.Text = "Do Nothing";
            this.btnDoNothing.UseVisualStyleBackColor = true;
            this.btnDoNothing.Click += new System.EventHandler(this.btnDoNothing_Click);
            // 
            // btnScript
            // 
            this.btnScript.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnScript.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(177)));
            this.btnScript.Location = new System.Drawing.Point(146, 6);
            this.btnScript.Name = "btnScript";
            this.btnScript.Size = new System.Drawing.Size(100, 23);
            this.btnScript.TabIndex = 1;
            this.btnScript.Text = "Script";
            this.btnScript.UseVisualStyleBackColor = true;
            // 
            // btnDelete
            // 
            this.btnDelete.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnDelete.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(177)));
            this.btnDelete.Location = new System.Drawing.Point(394, 6);
            this.btnDelete.Name = "btnDelete";
            this.btnDelete.Size = new System.Drawing.Size(100, 23);
            this.btnDelete.TabIndex = 0;
            this.btnDelete.Text = "Delete";
            this.btnDelete.UseVisualStyleBackColor = true;
            this.btnDelete.Click += new System.EventHandler(this.btnDelete_Click);
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 0);
            this.splitContainer1.Name = "splitContainer1";
            this.splitContainer1.Orientation = System.Windows.Forms.Orientation.Horizontal;
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.listBoxFiles);
            this.splitContainer1.Panel1.Controls.Add(this.label1);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.panelButtons);
            this.splitContainer1.Size = new System.Drawing.Size(810, 466);
            this.splitContainer1.SplitterDistance = 418;
            this.splitContainer1.TabIndex = 3;
            // 
            // listBoxFiles
            // 
            this.listBoxFiles.ContextMenuStrip = this.contextMenuStrip;
            this.listBoxFiles.Dock = System.Windows.Forms.DockStyle.Fill;
            this.listBoxFiles.FormattingEnabled = true;
            this.listBoxFiles.Location = new System.Drawing.Point(0, 23);
            this.listBoxFiles.Name = "listBoxFiles";
            this.listBoxFiles.Size = new System.Drawing.Size(810, 395);
            this.listBoxFiles.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Dock = System.Windows.Forms.DockStyle.Top;
            this.label1.Location = new System.Drawing.Point(0, 0);
            this.label1.Name = "label1";
            this.label1.Padding = new System.Windows.Forms.Padding(5);
            this.label1.Size = new System.Drawing.Size(125, 23);
            this.label1.TabIndex = 0;
            this.label1.Text = "Duplicated Files Found";
            // 
            // FormHandler
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(810, 466);
            this.Controls.Add(this.splitContainer1);
            this.Name = "FormHandler";
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Show;
            this.Text = "Duplicants";
            this.contextMenuStrip.ResumeLayout(false);
            this.panelButtons.ResumeLayout(false);
            this.panelButtons.PerformLayout();
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip;
        private System.Windows.Forms.ToolStripMenuItem openToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem showInFolderToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem deleteFileToolStripMenuItem;
        private System.Windows.Forms.Panel panelButtons;
        private System.Windows.Forms.CheckBox checkBoxDoTheSame;
        private System.Windows.Forms.Button btnLink;
        private System.Windows.Forms.Button btnDoNothing;
        private System.Windows.Forms.Button btnScript;
        private System.Windows.Forms.Button btnDelete;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.ListBox listBoxFiles;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ToolTip toolTip1;
    }
}