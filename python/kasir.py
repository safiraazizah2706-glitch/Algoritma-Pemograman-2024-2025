nama = input("Masukkan nama barang: ")
harga = float(input("Masukkan harga barang: "))
jumlah = int(input("Masukkan jumlah beli: "))

total = harga * jumlah

if total > 56000:
    diskon = total = 0.06
else:
    diskon =0
    
total_bayar = total - diskon

print("\n===== STRUK PEMBELIAN =====")
print(f"Nama barang : {nama}")
print(f"Harga Satuan : {harga}")
print(f"jumlah Beli : {jumlah}")
print(f"Total Harga : {total} ")
print(f"Diskon : {diskon}")
print(f"Total bayar : {total_bayar}")
print("=============================")