<?php

use Illuminate\Database\Seeder;

class CoachSeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        DB::table('coaches')->insert([
            [
            'title' => 'Ranger son bureau',
            'completed' => 0,
            'id_category' => 1,
        ],[
            'title' => 'Aérer la pièce',
            'completed' => 0,
            'id_category' => 4,
            
        ],[
            'title' => 'Changer les draps',
            'completed' => 0,
            'id_category' => 4,
            
        ],[
            'title' => 'Passer l\'aspirateur',
            'completed' => 0,
            'id_category' => 4,
            
        ],[
            'title' => 'Secouer le tapis',
            'completed' => 0,
            'id_category' => 4,
            
        ],[
            'title' => 'Passer la serpillère',
            'completed' => 0,
            'id_category' => 4,
        ],[
            'title' => 'Faire un cadeau à un de ses proches',
            'completed' => 0,
            'id_category' => 3,
        ],[
            'title' => 'Faire la vaisselle',
            'completed' => 0,
            'id_category' => 4,
        ],[
            'title' => 'Nettoyer le four',
            'completed' => 0,
            'id_category' => 4,
        ],[
            'title' => 'Nettoyer le frigo',
            'completed' => 0,
            'id_category' => 4,
        ],[
            'title' => 'Repassage',
            'completed' => 0,
            'id_category' => 4,
        ],[
            'title' => 'Ranger le linge',
            'completed' => 0,
            'id_category' => 4,
        ],[
            'title' => 'Planifier des vacances',
            'completed' => 0,
            'id_category' => 3,
        ],[
            'title' => 'S\'inscire à un club de sport',
            'completed' => 0,
            'id_category' => 2,
        ],[
            'title' => 'Faire 2 fois 30 minutes de sport',
            'completed' => 0,
            'id_category' => 2,
        ],[
            'title' => 'Lire un livre',
            'completed' => 0,
            'id_category' => 2,
        ],[
            'title' => 'Se reposer',
            'completed' => 0,
            'id_category' => 2,
        ],[
            'title' => 'Répondre aux mails',
            'completed' => 0,
            'id_category' => 1,
        ],[
            'title' => 'Prendre des nouvelles de ses proches',
            'completed' => 0,
            'id_category' => 3,
        ],[
            'title' => 'Prendre des cours de self defense',
            'completed' => 0,
            'id_category' => 2,
        ],[
            'title' => 'Faire du yoga',
            'completed' => 0,
            'id_category' => 2,
        ],[
            'title' => 'Se coucher et se lever 30 minutes plus tôt',
            'completed' => 0,
            'id_category' => 2,
        ]
        ]);
    }
}