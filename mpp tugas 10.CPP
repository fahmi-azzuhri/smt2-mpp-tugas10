#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<cstring.h>
#include<iomanip.h>
int sub(int bnyk, int hrg)
{
return(bnyk*hrg);
}

char ket(char katm, char jatm[20])
{
switch(katm)
{
case '1':
strcpy(jatm,"ATM BRI");
break;

case '2':
strcpy(jatm,"ATM CIMB Niaga");
break;

case '3':
strcpy(jatm,"ATM Danamon");
break;

case '4':
strcpy(jatm,"ATM Bank Syariah Mandiri");
break;

case '5':
strcpy(jatm,"ATM BCA");
break;

default:
strcpy(jatm,"Kode ATM Salah");
break;
}
}
main()
{
char ikan[80][30],warna[50][30],kobar[3],lagi,awal;
int i,jumlah,harga[20],banyak[20],diskon,pajak,totalbayar,total,totalakhir;
struct
{
char hartang[40];
char napem[30];
char alamat[80];
char nohp[15];
}dtpmb;

struct
{
char kowil;
char wilayah[20];
int ongkir;
char koatm;
char jenisatm[50];
}dtpbd;

awal:
clrscr();
cout<<"\t\t SELAMAT DATANG, SELAMAT BERBELANJA"<<endl;
cout<<"\t\t FAHMI FISH SHOP"<<endl;
cout<<""<<endl;
cout<<"INPUT DATA PEMBELI"<<endl<<endl;
cout<<"\tHari, Tanggal \t\t: ";gets(dtpmb.hartang);
cout<<"\tMasukan Nama Pembeli \t: ";gets(dtpmb.napem);
cout<<"\tMasukan Alamat\t\t: ";gets(dtpmb.alamat);
cout<<"\tMasukan Nomor Telpon/HP : ";gets(dtpmb.nohp);

cout<<endl;

cout<<"--------------------------"<<endl;
cout<<"\t\t Wilayah Tujuan Penerima"<<endl;
cout<<"[1] Pulau Jawa \t\t: Ongkos Kirim Rp.18.000,00?"<<endl;
cout<<"[2] Pulau Kalimantan \t: Ongkos Kirim Rp.35.000,00?"<<endl;
cout<<"[3] Pulau Sulawesi \t: Ongkos Kirim Rp.38.000,00?"<<endl;
cout<<"[4] Pulau Sumatera \t: Ongkos Kirim Rp.28.000,00?"<<endl;
cout<<"[5] Pulau Papua \t: Ongkos Kirim Rp.70.000,00?"<<endl;
cout<<"[6] Pulau Bali \t\t: Ongkos Kirim Rp.50.000,00?"<<endl<<endl;

cout<<"--------------------------"<<endl;

cout<<endl;
cout<<"\tMasukan Kode Wilayah [1/2/3/4/5/6]\t: ";cin>>dtpbd.kowil;

switch(dtpbd.kowil)
{
case '1':
strcpy(dtpbd.wilayah,"Pulau Jawa");
dtpbd.ongkir=18000;
break;

case '2':
strcpy(dtpbd.wilayah,"Pulau Kalimantan");
dtpbd.ongkir=35000;
break;

case '3':
strcpy(dtpbd.wilayah,"Pulau Sulawesi");
dtpbd.ongkir=38000;
break;

case '4':
strcpy(dtpbd.wilayah,"Pulau Sumatera");
dtpbd.ongkir=28000;
break;

case '5':
strcpy(dtpbd.wilayah,"Pulau Papua");
dtpbd.ongkir=70000;
break;

case '6':
strcpy(dtpbd.wilayah,"Pulau Bali");
dtpbd.ongkir=50000;
break;

default:
strcpy(dtpbd.wilayah,"Kode Wilayah Salah");
dtpbd.ongkir=0;
break;
}

cout<<endl<<endl;
cout<<"--------------------------"<<endl;
cout<<"\t\t Daftar Kode ATM"<<endl<<endl;
cout<<"[1] ATM BRI"<<endl;
cout<<"[2] ATM CIMB Niaga"<<endl;
cout<<"[3] ATM Danamon"<<endl;
cout<<"[4] ATM Bank Syairiah Mandiri"<<endl;
cout<<"[5] ATM BCA"<<endl;
cout<<"---------------------------"<<endl;

cout<<"\tMasukan Kode ATM [1/2/3/4/5]\t\t: ";cin>>dtpbd.koatm;
ket(dtpbd.koatm,dtpbd.jenisatm);

clrscr();
cout<<"|---------------------------------------------|"<<endl;
cout<<"| JENIS IKAN CUPANG DI FAHMI FISH STORE	      |"<<endl;
cout<<"|---------------------------------------------|"<<endl;
cout<<"| Kode |  Jenis Ikan  |  Warna  | Harga       |"<<endl;
cout<<"|---------------------------------------------|"<<endl;
cout<<"| 1    | Halfmoon   | Blue Solid  | Rp.180.000|"<<endl;
cout<<"| 2    | Halfmoon   | Nemo        | Rp.120.000|"<<endl;
cout<<"| 3    | Plakat     | Blue Rim    | Rp.300.000|"<<endl;
cout<<"| 4    | Plakat     | Nemo 	  | Rp.100.000|"<<endl;
cout<<"| 5    | Crowntail  | Marble      | Rp.250.000|"<<endl;
cout<<"| 6    | Crowntail  | White Solid | Rp.200.000|"<<endl;
cout<<"|---------------------------------------------|"<<endl;

cout<<endl;
cout<<"\tBanyak Jenis : ";cin>>jumlah;
cout<<endl;
total=0;
for(i=1;i<=jumlah;i++)
{
cout<<"\tPembelian Ke : "<<i<<endl;
cout<<"\tMasukan Kode Barang [1/2/3/4/5/6]\t: ";cin>>kobar[i];
if (kobar[i]=='1' || kobar[i]=='1')
{
strcpy(ikan[i],"Halfmoon");
strcpy(warna[i],"Blue Solid");
harga[i]=180000;
}
else if (kobar[i]=='2'|| kobar[i]=='2')
{
strcpy(ikan[i],"Halfmoon");
strcpy(warna[i],"Nemo");
harga[i]=120000;
}
else if (kobar[i]=='3' || kobar[i]=='3')
{
strcpy(ikan[i],"Plakat");
strcpy(warna[i],"Blue Rim");
harga[i]=300000;
}
else if (kobar[i]=='4' || kobar[i]=='4')
{
strcpy(ikan[i],"Plakat");
strcpy(warna[i],"Nemo");
harga[i]=100000;
}
else if (kobar[i]=='5' || kobar[i]=='5')
{
strcpy(ikan[i],"Crowntail");
strcpy(warna[i],"Marble");
harga[i]=250000;
}
else if (kobar[i]=='6' || kobar[i]=='6')
{
strcpy(ikan[i],"Crowntail");
strcpy(warna[i],"White Solid");
harga[i]=200000;
}
else
{
strcpy(ikan[i],"Kode Ikan Salah");
strcpy(warna[i],"Kode Ikan Salah");
harga[i]=0;
}

cout<<"\tMasukan Banyak Beli : ";cin>>banyak[i];
sub(banyak[i],harga[i]);
total=total+sub(banyak[i],harga[i]);
}

clrscr();
cout<<endl;
cout<<" \t\t\t ***FAHMI FISH STORE***"<<endl;
cout<<"======================RESI Pemesanan==========================="<<endl<<endl;
cout<<"\tHari, Tanggal \t\t: "<<dtpmb.hartang<<endl;
cout<<"\tNama Pembeli \t\t: "<<dtpmb.napem<<endl;
cout<<"\tAlamat \t\t\t: "<<dtpmb.alamat<<endl;
cout<<"\tNomor Telpon/HP \t: "<<dtpmb.nohp<<endl<<endl;

for(i=1;i<=jumlah;i++)
{
cout<<"\tKode Ikan \t\t: "<<kobar[i]<<endl;
cout<<"\tIkan Yang di Pesan : "<<ikan[i]<<endl;
cout<<"\tWarna \t\t\t: "<<warna[i]<<endl;
cout<<"\tHarga Ikan \t: "<<harga[i]<<endl;
cout<<"\tBanyak Beli \t\t: "<<banyak[i]<<endl<<endl;
}

cout<<"\tSubtotal \t\t: "<<total<<endl;
cout<<"\tWilayah Pembeli \t: "<<dtpbd.wilayah<<endl;
cout<<"\tOngkos Kirim \t\t: "<<dtpbd.ongkir<<endl<<endl;
cout<<"==============================================================="<<endl<<endl;
cout<<""<<endl;
cout<<"\tBayar Via \t : "<<dtpbd.jenisatm<<endl;
totalbayar=total+dtpbd.ongkir;
cout<<"\tTotal Bayar \t : "<<totalbayar<<endl;

if(totalbayar>1000000)
{diskon=totalbayar*10/100;
}
else
{diskon=0;
}
cout<<"\tDiskon 10% \t : "<<diskon<<endl;

if(totalbayar>10000000)
{pajak=totalbayar*5/100;
}
else
{pajak=0;
}
cout<<"\tPajak PPN \t : "<<pajak<<endl;
totalakhir=totalbayar-diskon+pajak;
cout<<"\tTotal Akhir Bayar : "<<totalakhir;
cout<<endl<<endl;

cout<<"Terimakasih Atas Kepercayaan Anda"<<endl;
cout<<"Jangan Lupa Saat Unboxing Divideokan"<<endl;
cout<<"Untuk Klaim Garansi Saat Ikan Mati"<<endl;
cout<<""<<endl;
cout<<"FAHMI FISH SHOP"<<endl;

cout<<endl<<endl;
cout<<"\tApakah Anda Ingin Kembali Ke Menu Awal ? [Y][T] : ";cin>>lagi;
if (lagi=='Y'||lagi=='y')
goto awal;
else
cout<<"\t\tAnda Keluar Dari Sistem, Terima Kasih";

getch();
}

