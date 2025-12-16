#variabel global untuk menyimpan data buku
buku = []

#fungsi untuk menampilkan semua data
def show_data():
    if len(buku) == 0:
        print('BELUM ADA DATA')
    else:
        for indeks, in range (len(buku)):
            print('[%D] %S' % (indeks, buku[indeks])) 
                  
                  #fungsi untuk menambah data
        def insert_data():
            buku_baru = raw_input('judul buku:')
            buku.append(buku_baru)
            
#fungsi untuk edit data
        def edit_data():
            show_data()
            indeks = (input(' Inputkan ID buku: '))
            if indeks > len(buku): 
                print('ID salah')
            else:
                buku_baru = raw_input('judul buku baru:')
                buku[indeks] = buku_baru
    
#fungsi untuk menampilkan menu
def show_menu():
    print ('\n')
    print('[1]. Tampilkan data buku')
    print('[2]. Tambah data buku')
    print('[3]. Edit data buku')
    print('[4]. Keluar')
    
    menu = input('PILIH MENU>')
    if menu == 1:
        show_data()
    elif menu == 2:
        insert_data()
    elif menu == 3:
        edit_data()
    elif menu == 4:
        exit()
    else:
        print('salah pilih')
if __name__ == '__main__':
    while (True):
        show_menu()