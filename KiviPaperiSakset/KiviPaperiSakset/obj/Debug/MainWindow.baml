   M S B A M L   `   `   `  ����K  GKiviPaperiSakset, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null3clr-namespace:KiviPaperiSaksetKiviPaperiSakset  5   	   !    KiviPaperiSakset.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   0localclr-namespace:KiviPaperiSakset     5   	     � Title$  Kivi - Paperi - Sakset��5   	   $	��450��6(   $	��800��65   .��5	      � .+�5   
   �� $��	Valintasi��6   $
��Left=�6$   $��	28,20,0,0q�6?   $	��Top=�6R   $��98��6j   $��24(�6u   �� 5   
   -   5        $
��Left=�5      $��	28,65,0,0q�6,   $	��Top=�6?   $��98��6W   $��80��6b   .��5      ]� .+�5      �� $)��#img/rock-paper-scissors-icon-24.jpg��6   5      5      �� 5   
   -   5        $
��Left=�5      $��
28,165,0,0q�6-   $	��Top=�6A   $��98��6Y   $��80��6d   .��5      ]� .+�5      �� $)��#img/rock-paper-scissors-icon-22.jpg��6   5      5      �� 5   
   -   5        $
��Left=�5      $��
28,265,0,0q�6,   $	��Top=�6@   $��98��6X   $��80��6c   .��5      ]� .+�5      �� $)��#img/rock-paper-scissors-icon-23.jpg��6   5      5      �� 5   
   -   5         ��Name$ Kanvaasi��5      $
��Left=�6#   $	��562��6>   $	��239��6J   $��
202,20,0,0q�6W   $	��Top=�6k   ���	#FFA7B4B1.+�5      �� $
��Left=�6   $	��100��6/   $	��Top=�6<   $	��100��6T   $)��#img/rock-paper-scissors-icon-24.jpg��6`   �� 5      $
��Left=�6   $	��100��6/   $	��Top=�6<   $	��100��6T   $)��#img/rock-paper-scissors-icon-23.jpg��6`   �� 5      $
��Left=�6   $	��100��6/   $	��Top=�6<   $	��100��6T   $)��#img/rock-paper-scissors-icon-22.jpg��6`   5       �� 5"   
   -   5         ��Name$ Pelaaja��5"      $
��Left=�6!   $	��100��6<   $��250,282,0,0q�6I   $	��Top=�6^   $	��100��6v   �� 5#   
   -   5        $
 Kone��5#      $
��Left=�6   $	��100��69   $��616,282,0,0q�6F   $	��Top=�6[   $	��100��6s   �� 5$   
   $
��Left=�6   $��384,296,0,0q�6/   $
��Wrap=�6D   $	��Top=�5&   
   $	��214��6"   $��86��6.    �� TextAlignment$ Center=�6:   ��5%   
   �� *Tulos+ �� RelativeSource ��  �� Mode$ FindAncestor=� �� AncestorType$ WindowL�5&   :   5'      5(      