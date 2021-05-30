<?php
namespace App;

use Illuminate\Database\Eloquent\Model;

class Category extends Model
{
 
    public function task()
    {
        return $this->hasMany('\App\Task');
    }

    public function coach()
    {
        return $this->hasMany('\App\Coach');
    }
    /**
     * The attributes that are mass assignable.
     *
     * @var array
     */
    protected $fillable = [
        'id', 'title'
    ];
}