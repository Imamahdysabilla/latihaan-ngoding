class Product:
    def __init__(self, id, name, price):
        self.id = id
        self.name = name
        self.price = price

    def __str__(self):
        return f"Id Product : {self.id}\tNama Product : {self.name}\tHarga Product : {self.price}"

class Transaction:
    def __init__(self, product, buyer_name, buyer_address, phone_number, courier_name):
        self.product = product
        self.buyer_name = buyer_name
        self.buyer_address = buyer_address
        self.phone_number = phone_number
        self.courier_name = courier_name

    def print_transaction(self, payment_method):
        print("======================= Detail Transaksi ========================")
        print(f"Nama Penerima : {self.buyer_name}")
        print(f"Alamat Penerima : {self.buyer_address}")
        print(f"No HP : {self.phone_number}")
        print(f"Nama Kurir Pengirim : {self.courier_name}")
        print(str(self.product))
        print(f"Metode Pembayaran : {payment_method}")

data_product = {
    1:"iPhone 14 ",
    2:"Oppo A77s ",
    3:"Realme C55 NFC",
    4:"Vivo Y02"
}

daftar_harga = [15999000, 3079000, 2285000, 1395000]

dict_trx = {}
daftar_metode_pembayaran = {
    1:"Transfer Bank",
    2:"Virtual Account",
    3:"Cash on Delivery",
    4:"Kartu Kredit",
}

print("===============List Product================")
for i in data_product:
    print("Id Product : ", i,"\t Nama Product :",
        data_product[i], "\t Harga Product : ", daftar_harga[i-1])

pilihan = input("Ingin Melakukan Pembelian? (Y/N) : ")
if pilihan == "y" or pilihan == "Y":
    pilih_id = int(input("Pilih Id Product : "))
    if pilih_id in data_product :
        pilih_beli = input("Ingin Beli ? (Y/N): ")
        if pilih_beli == "y" or pilih_beli=="Y":
            nama_penerima       = input("Nama Penerima    : ")
            alamat_penerima     = input("Alamat Penerima  : ")
            telepon             = input("No HP            : ")
            nama_kurir_pengirim = input("nama Kurir Pengirim : ")
            dict_trx = {
                "nama penerima":nama_penerima,
                "alamat penerima":alamat_penerima,
                "No HP":telepon,
                "nama kurir pengirim":nama_kurir_pengirim,
                "product id":data_product,
            }
        else:
            pass
        if len(dict_trx) > 0:
            print("======================= Metode Pembayaran =======================")
            for i in daftar_metode_pembayaran:
                print("Id : ", i, "\t Metode Pembayaran : ", daftar_metode_pembayaran[i])
            pilih_metode = int(input("Pilih ID Metode Pembayaran : "))
            if pilih_metode in daftar_metode_pembayaran :
                print("Nama Penerima : ", dict_trx["nama penerima"])
                print("Alamat Penerima : ", dict_trx["alamat penerima"])
                print("No HP : ", dict_trx["No HP"])
                print("nama Kurir Pengirim : ", dict_trx["nama kurir pengirim"])
                print("Product : ", data_product[pilih_id])
                print("Harga : ", daftar_harga[pilih_id-1])
                print("Metode Pembayaran : ", daftar_metode_pembayaran[pilih_metode])
                konfirmasi = input("Apakah Anda Yakin Ingin Melakukan Pembayaran? (Y/N) : ")
                if konfirmasi == "y" or konfirmasi == "Y":
                    print("terima kasih sudah berbelanja di toko kami :v ")
                    print("jangan lupaa dateng lagi yaa gaessss,see youuuu")
                else:
                    pass
            else:
                print("Id metode pembayaran tidak tersedia")
        else:
            pass
    else:
        print("Id product tidak tersedia")
else:
    print("Terima kasih telah mengunjungi toko kami") 
    print("Silakan datang kembali lain waktu") 
