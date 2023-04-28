using System.Windows;
using System.Windows.Controls;
using CLIwrapper;

namespace HelloWpfApp
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }
        private bool isClicked = false;
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            if (!isClicked)
            {
                HelloWrap nHello = new HelloWrap();
                tb1.Text = nHello.Hello();
                isClicked = true;
            }
            else 
            { 
                tb1.Text = "-";
                isClicked = false;
            }

        }

        private void TextBox_TextChanged(object sender, TextChangedEventArgs e)
        {

        }
    }
}
