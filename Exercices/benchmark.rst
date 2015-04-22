

Evaluation des performances des appels syst�mes
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Pour le troisi�me projet, vous devrez choisir un appel syst�me, analyser la fa�on dont il doit �tre utilis�, sur base de sa page de manuel et de livres de r�f�rence et ensuite en �valuer ses performances. Pour cette �valuation de performances, vous devrez modifier le programme de benchmark d�velopp� par Beno�t Legat, Nicolas Demol et Maxime Houtain :

 https://github.com/blegat/benchmark.git

Pour s'ex�cuter, ce programme n�cessite une version r�cente de `gnuplot <http://www.gnuplot.info>`_ , un programme permettant d'afficher des donn�es de fa�on graphique. T�l�chargez les sources de ce programme et installez-le en faisant :

.. code:: console


   wget http://sourceforge.net/projects/gnuplot/files/gnuplot/4.6.5/gnuplot-4.6.5.tar.gz
   tar xzvf gnuplot-4.6.5.tar.gz
   cd gnuplot-4.6.5
   ./configure
   make

Le programme gnuplot est maintenant compil� et pr�t � �tre utilis�. Le programme ex�cutable est dans le r�pertoire gnuplot-4.6.5/src/gnuplot

Chargez le programme de benchmark et compilez-le comme suit :

.. code:: console

   git clone https://github.com/blegat/benchmark.git
   cd benchmark
   PATH=~/src/gnuplot-4.6.5/src:${PATH} ./bootstrap.sh 
   make

La troisi�me commande permet de forcer l'utilisation de la version r�cente de gnuplot que vous avez install� � la place de la version par d�faut du syst�me qui n'est pas support�e par l'outil de benchmark. Une fois le benchmark compil�, vous pouvez l'ex�cuter et tester les benchmarks fournis. Commencez par ceux qui se trouvent dans les r�pertoires suivants :

 - ``tab``
 - ``thread`` 
 - ``amdahl`` 
 - ``types``

Pour ex�cuter un benchmark, lancez simplement ``make show`` dans le r�pertoire du benchmark. Il ex�cutera alors le benchmark et produira un fichier HTML contenant les r�sultats obtenus ainsi que des fichiers au format .csv avec les valeurs mesur�es. Essayez d'interpr�ter les r�sultats obtenus. Pouvez-vous justifier l'�volution des performances que vous observez ?
