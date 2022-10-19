/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package person;

/**
 *
 * @author agush
 */
public class NewPerson {
        /* memanggil atribut dan memberi nilai */
    public static void main(String[] args){
        // Membuat object 2 person
        Person Person1 = new Person();
        // Membuat objek person1
        Person1.nama = "Anton";
        Person1.jenis_kelamin = "laki-laki";
        Person1.umur = 22;
        System.out.println("Nama: " + Person1.nama);
        System.out.println("Jenis Kelamin: " + Person1.jenis_kelamin);
        System.out.println("Umur: " + Person1.umur);
        
        // Membuat objek person2
        Person Person2 = new Person();
        /* memanggil atribut dan memberi nilai */
        Person2.nama = "Riko";
        Person2.jenis_kelamin = "laki-laki";
        Person2.umur = 21;
        System.out.println("Nama: " + Person2.nama);
        System.out.println("Jenis Kelamin: " + Person2.jenis_kelamin);
        System.out.println("Umur: " + Person2.umur);
    }
}
