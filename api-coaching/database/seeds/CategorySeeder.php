<?php

use Illuminate\Database\Seeder;

class CategorySeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        DB::table('categories')->insert([[
            'title' => 'Professionnel',
            
        ],[
            'title' => 'Sport et Santé',
            
        ],[
            'title' => 'Famille et Amis',
            
        ],[
            'title' => 'Maison',  
        ]]);
    }
}
