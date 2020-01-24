using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Media.Imaging;
using System.Windows.Threading;


namespace KiviPaperiSakset
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        //A timer that is integrated into the UI's Dispatcher queue which is processed
        //at a specified interval of time 
        //The DispatcherTimer is reevaluated at the top of every Dispatcher loop.
        //Timers are not guaranteed to execute exactly when the time interval occurs, 
        //but they are guaranteed to not execute BEFORE the time interval occurs.
        private DispatcherTimer dispatcherTimer;
        //kuvien siirtoon indeksi
        private int i; 
        //kuvien paikat
        private double[] PaikkaX;
        private double[] PaikkaY;

        //koneen valinta satunnaisesti
        private Random random = new Random();
        //tuloksen ilmoittaminen, rekisteröidään staattinen dependencyproperty
        private static readonly DependencyProperty tulosProperty =
           DependencyProperty.Register("Tulos", typeof(string),
               typeof(Window), new PropertyMetadata(null));
        //ja property, johon käyttöliittymän tekstiblokki on sidottu
        public string Tulos
        {
            get { return (string)GetValue(tulosProperty); }
            set { SetValue(tulosProperty, value); }
        }

        public MainWindow()
        {
            //lukee läpi xaml-koodin ja alustaa elementit
            InitializeComponent();
            Init();
            VaihdaKuva(i);
            DataContext = this;
            //  DispatcherTimer asetukset ja Dispatcher silmukan käynnistys
            dispatcherTimer = new System.Windows.Threading.DispatcherTimer();
            //tapahtuman lisääminen
            dispatcherTimer.Tick += new EventHandler(DispatcherTimer_Tick);
            dispatcherTimer.Interval = new TimeSpan(0, 0, 0, 0, 500);
            dispatcherTimer.Start();
        }

        private void Init()
        {
            PaikkaX = new double[] { 234, 380, 116 };
            PaikkaY = new double[] { 3, 113, 113 };
        }


        private void DispatcherTimer_Tick(object sender, EventArgs e)
        {
            VaihdaKuva(i++);
            CommandManager.InvalidateRequerySuggested();
        }

        private void VaihdaKuva(int i)
        {
            //asetetaan kanvaasilla kuvien paikat, kuvat laitettu xaml-koodissa
            foreach (Image image in Kanvaasi.Children)
            {
                Canvas.SetLeft(image, PaikkaX[i % 3]);
                Canvas.SetTop(image, PaikkaY[i % 3]);
                i++;
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            //näytetään pelaajan valinta
            Pelaaja.Source =
                (((sender as Button).Content as DockPanel)
                .Children[0] as Image).Source;

            //näytetään koneen valinta
            int valinta = random.Next(22, 25); //kuvatiedostojen viimeinen numero
            Kone.Source = new BitmapImage(
                new Uri("img/rock-paper-scissors-icon-" + valinta + ".jpg", 
                UriKind.RelativeOrAbsolute));

            Tarkista();
        }









        private void Tarkista()
        {            
            if (Pelaaja.Source.ToString().Contains("22") &&
                Kone.Source.ToString().Contains("23"))
            { Tulos = "Pelaajan voitto - sakset leikkaa paperia."; }
            else if (Pelaaja.Source.ToString().Contains("23") &&
                Kone.Source.ToString().Contains("24"))
            { Tulos = "Pelaajan voitto - paperi peittää kiven."; }
            else if (Pelaaja.Source.ToString().Contains("24") &&
                Kone.Source.ToString().Contains("22"))
            { Tulos = "Pelaajan voitto - kivi rikkoo sakset."; }
            else if (Pelaaja.Source.ToString().Contains("23") &&
                Kone.Source.ToString().Contains("22"))
            { Tulos = "Koneen voitto - sakset leikkaa paperia."; }
            else if (Pelaaja.Source.ToString().Contains("24") &&
                Kone.Source.ToString().Contains("23"))
            { Tulos = "Koneen voitto - paperi peittää kiven."; }
            else if (Pelaaja.Source.ToString().Contains("22") &&
                Kone.Source.ToString().Contains("24"))
            { Tulos = "Koneen voitto - kivi rikkoo sakset."; }
            else
            { Tulos = "Tasapeli"; }
        }
    }
}