<?php
namespace App;

use Illuminate\Database\Eloquent\Model;

class Users extends Model
{
 
    public function task()
    {
        return $this->hasMany('\App\Task');
    }
    /**
     * The attributes that are mass assignable.
     *
     * @var array
     */
    protected $fillable = [
        'id', 'email'
    ];
}